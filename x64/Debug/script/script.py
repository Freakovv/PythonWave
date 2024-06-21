import unittest
import importlib.util
import os
import temp  # Импорт модуля temp, в котором определены функции add, multiply, divide, subtract, even_or_odd, better_than_average, positive_sum, reverse_seq

functions_available = []

# Попытка импорта функций из модуля temp
try:
    spec_add = importlib.util.find_spec('temp')
    if spec_add is not None:
        if hasattr(temp, 'add'):
            functions_available.append('add')

    spec_multiply = importlib.util.find_spec('temp')
    if spec_multiply is not None:
        if hasattr(temp, 'multiply'):
            functions_available.append('multiply')

    spec_divide = importlib.util.find_spec('temp')
    if spec_divide is not None:
        if hasattr(temp, 'divide'):
            functions_available.append('divide')

    spec_subtract = importlib.util.find_spec('temp')
    if spec_subtract is not None:
        if hasattr(temp, 'subtract'):
            functions_available.append('subtract')

    spec_even_or_odd = importlib.util.find_spec('temp')
    if spec_even_or_odd is not None:
        if hasattr(temp, 'even_or_odd'):
            functions_available.append('even_or_odd')

    spec_better_than_average = importlib.util.find_spec('temp')
    if spec_better_than_average is not None:
        if hasattr(temp, 'better_than_average'):
            functions_available.append('better_than_average')

    spec_positive_sum = importlib.util.find_spec('temp')
    if spec_positive_sum is not None:
        if hasattr(temp, 'positive_sum'):
            functions_available.append('positive_sum')

    spec_reverse_seq = importlib.util.find_spec('temp')
    if spec_reverse_seq is not None:
        if hasattr(temp, 'reverse_seq'):
            functions_available.append('reverse_seq')

    spec_get_count = importlib.util.find_spec('temp')
    if spec_get_count is not None:
        if hasattr(temp, 'get_count'):
            functions_available.append('get_count')

    spec_high_and_low = importlib.util.find_spec('temp')
    if spec_high_and_low is not None:
        if hasattr(temp, 'high_and_low'):
            functions_available.append('high_and_low')

    spec_square_digits = importlib.util.find_spec('temp')
    if spec_square_digits is not None:
        if hasattr(temp, 'square_digits'):
            functions_available.append('square_digits')
            
    spec_square_digits = importlib.util.find_spec('temp')
    if spec_square_digits is not None:
        if hasattr(temp, 'get_char'):
            functions_available.append('get_char')

    spec_square_digits = importlib.util.find_spec('temp')
    if spec_square_digits is not None:
        if hasattr(temp, 'symmetric_point'):
            functions_available.append('symmetric_point')

    spec_square_digits = importlib.util.find_spec('temp')
    if spec_square_digits is not None:
        if hasattr(temp, 'get_middle'):
            functions_available.append('get_middle')
            
except ImportError:
    pass

class TestMain(unittest.TestCase):

    def test_add(self):
        if 'add' in functions_available:
            self.assertEqual(temp.add(2, 3), 5)
            self.assertEqual(temp.add(-1, 1), 0)
            self.assertEqual(temp.add(0, 0), 0)
        else:
            self.skipTest("Function 'add' not available in module 'temp'.\n")

    def test_multiply(self):
        if 'multiply' in functions_available:
            self.assertEqual(temp.multiply(2, 3), 6)
            self.assertEqual(temp.multiply(-1, 1), -1)
            self.assertEqual(temp.multiply(0, 5), 0)
            self.assertEqual(temp.multiply(4, 0), 0)
        else:
            self.skipTest("Function 'multiply' not available in module 'temp'.\n")

    def test_divide(self):
        if 'divide' in functions_available:
            self.assertEqual(temp.divide(10, 2), 5)
            with self.assertRaises(ZeroDivisionError):
                temp.divide(5, 0)
            self.assertAlmostEqual(temp.divide(1, 3), 0.3333, places=4)
        else:
            self.skipTest("Function 'divide' not available in module 'temp'.\n")

    def test_subtract(self):
        if 'subtract' in functions_available:
            self.assertEqual(temp.subtract(5, 3), 2)
            self.assertEqual(temp.subtract(10, 5), 5)
            self.assertEqual(temp.subtract(0, 0), 0)
            self.assertEqual(temp.subtract(-1, -1), 0)
        else:
            self.skipTest("Function 'subtract' not available in module 'temp'.\n")

    def test_even_or_odd(self):
        if 'even_or_odd' in functions_available:
            self.assertEqual(temp.even_or_odd(0), "Even")
            self.assertEqual(temp.even_or_odd(2), "Even")
            self.assertEqual(temp.even_or_odd(100), "Even")
            self.assertEqual(temp.even_or_odd(-4), "Even")
            self.assertEqual(temp.even_or_odd(-10), "Even")
            
            self.assertEqual(temp.even_or_odd(1), "Odd")
            self.assertEqual(temp.even_or_odd(3), "Odd")
            self.assertEqual(temp.even_or_odd(101), "Odd")
            self.assertEqual(temp.even_or_odd(-5), "Odd")
            self.assertEqual(temp.even_or_odd(-11), "Odd")
        else:
            self.skipTest("Function 'even_or_odd' not available in module 'temp'.\n")

    def test_better_than_average(self):
        if 'better_than_average' in functions_available:
            self.assertEqual(temp.better_than_average([2, 3], 5), True)
            self.assertEqual(temp.better_than_average([100, 40, 34, 57, 29, 72, 57, 88], 75), True)
            self.assertEqual(temp.better_than_average([12, 23, 34, 45, 56, 67, 78, 89, 90], 69), True)
            self.assertEqual(temp.better_than_average([41, 75, 72, 56, 80, 82, 81, 33], 50), False)
            self.assertEqual(temp.better_than_average([29, 55, 74, 60, 11, 90, 67, 28], 21), False)
        else:
            self.skipTest("Function 'better_than_average' not available in module 'temp'.\n")

    def test_positive_sum(self):
        if 'positive_sum' in functions_available:
            self.assertEqual(temp.positive_sum([1, -4, 7, 12]), 20)
            self.assertEqual(temp.positive_sum([-1, -2, -3, -4]), 0)
            self.assertEqual(temp.positive_sum([0, 2, 4, 6, 8]), 20)
            self.assertEqual(temp.positive_sum([5, 10, 15, -20, 25]), 55)
            self.assertEqual(temp.positive_sum([]), 0)
        else:
            self.skipTest("Function 'positive_sum' not available in module 'temp'.\n")

    def test_reverse_seq(self):
        if 'reverse_seq' in functions_available:
            self.assertEqual(temp.reverse_seq(5), [5, 4, 3, 2, 1])
            self.assertEqual(temp.reverse_seq(1), [1])
            self.assertEqual(temp.reverse_seq(3), [3, 2, 1])
            self.assertEqual(temp.reverse_seq(10), [10, 9, 8, 7, 6, 5, 4, 3, 2, 1])
        else:
            self.skipTest("Function 'reverse_seq' not available in module 'temp'.\n")

    def test_get_count(self):
        if 'get_count' in functions_available:
            self.assertEqual(temp.get_count("hello"), 2)
            self.assertEqual(temp.get_count("world"), 1)
            self.assertEqual(temp.get_count("this is a test"), 4)
            self.assertEqual(temp.get_count("aeiou"), 5)
            self.assertEqual(temp.get_count("bcdfghjklmnpqrstvwxyz"), 0)
        else:
            self.skipTest("Function 'get_count' not available in module 'temp'.\n")

    def test_high_and_low(self):
        if 'high_and_low' in functions_available:
            self.assertEqual(temp.high_and_low("1 2 3 4 5"), "5 1")
            self.assertEqual(temp.high_and_low("1 2 -3 4 5"), "5 -3")
            self.assertEqual(temp.high_and_low("1 9 3 4 -5"), "9 -5")
            self.assertEqual(temp.high_and_low("13"), "13 13")
        else:
            self.skipTest("Function 'high_and_low' not available in module 'temp'.\n")

    def test_square_digits(self):
        if 'square_digits' in functions_available:
            self.assertEqual(temp.square_digits(9119), 811181)
            self.assertEqual(temp.square_digits(0), 0)
        else:
            self.skipTest("Function 'square_digits' not available in module 'temp'.\n")

    def test_get_char(self):
        if 'symmetric_point' in functions_available:
            self.assertEqual(temp.symmetric_point([0,0], [1,1]), [2, 2])
            self.assertEqual(temp.symmetric_point([2, 6], [-2, -6]), [-6, -18])
            self.assertEqual(temp.symmetric_point([10, -10], [-10, 10]), [-30, 30])
            self.assertEqual(temp.symmetric_point([1, -35], [-12, 1]), [-25, 37])
            self.assertEqual(temp.symmetric_point([1000, 15], [-7, -214]), [-1014, -443])
            self.assertEqual(temp.symmetric_point([0, 0], [0, 0]), [0, 0])
        else:
            self.skipTest("Function 'symmetric_point' not available in module 'temp'.\n")

    def test_get_middle(self):
        if 'get_middle' in functions_available:
            self.assertEqual(temp.get_middle("test"),"es")
            self.assertEqual(temp.get_middle("testing"),"t")
            self.assertEqual(temp.get_middle("middle"),"dd")
            self.assertEqual(temp.get_middle("A"),"A")
            self.assertEqual(temp.get_middle("of"),"of")
        else:
            self.skipTest("Function 'get_middle' not available in module 'temp'.\n")


if __name__ == '__main__':
    loader = unittest.TestLoader()
    suite = unittest.TestSuite()

if any(func in functions_available for func in ['add', 'multiply', 'divide', 'subtract', 'even_or_odd', 'better_than_average', 'positive_sum', 'reverse_seq', 'get_count', 'high_and_low', 'square_digits', 'get_char', 'symmetric_point', 'get_middle']):
    suite.addTests(loader.loadTestsFromTestCase(TestMain))
else:
    with open('script/result.txt', 'w') as f:
        f.write("ERROR\n")
    exit(1)

result_file = os.path.join('script', 'result.txt')
os.makedirs('script', exist_ok=True)

with open(result_file, 'w') as f:
    runner = unittest.TextTestRunner(verbosity=2)
    result = runner.run(suite)
    if result.wasSuccessful():
        f.write("OK\n")
    else:
        f.write("FAILED\n")