import unittest
import importlib.util
import os
import temp  # Импорт модуля temp, в котором определены функции add, multiply, divide, sum_numbers, name_to_initials, better_than_average

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

    spec_sum_numbers = importlib.util.find_spec('temp')
    if spec_sum_numbers is not None:
        if hasattr(temp, 'sum_numbers'):
            functions_available.append('sum_numbers')

    spec_name_to_initials = importlib.util.find_spec('temp')
    if spec_name_to_initials is not None:
        if hasattr(temp, 'name_to_initials'):
            functions_available.append('name_to_initials')

    spec_better_than_average = importlib.util.find_spec('temp')
    if spec_better_than_average is not None:
        if hasattr(temp, 'better_than_average'):
            functions_available.append('better_than_average')

except ImportError:
    pass

class TestMain(unittest.TestCase):

    def test_add(self):
        if 'add' in functions_available:
            self.assertEqual(temp.add(2, 3), 5)
            self.assertEqual(temp.add(-1, 1), 0)
            self.assertEqual(temp.add(0, 0), 0)
        else:
            self.skipTest("Function 'add' not available in module 'temp'.")

    def test_multiply(self):
        if 'multiply' in functions_available:
            self.assertEqual(temp.multiply(2, 3), 6)
            self.assertEqual(temp.multiply(-1, 1), -1)
            self.assertEqual(temp.multiply(0, 5), 0)
            self.assertEqual(temp.multiply(4, 0), 0)
        else:
            self.skipTest("Function 'multiply' not available in module 'temp'.")

    def test_divide(self):
        if 'divide' in functions_available:
            self.assertEqual(temp.divide(10, 2), 5)
            with self.assertRaises(ZeroDivisionError):
                temp.divide(5, 0)
            self.assertAlmostEqual(temp.divide(1, 3), 0.3333, places=4)
        else:
            self.skipTest("Function 'divide' not available in module 'temp'.")

    def test_sum_numbers(self):
        if 'sum_numbers' in functions_available:
            self.assertEqual(temp.sum_numbers(2), 3)
            self.assertEqual(temp.sum_numbers(8), 36)
            self.assertEqual(temp.sum_numbers(1), 1)
            self.assertEqual(temp.sum_numbers(10), 55)
        else:
            self.skipTest("Function 'sum_numbers' not available in module 'temp'.")

    def test_name_to_initials(self):
        if 'name_to_initials' in functions_available:
            self.assertEqual(temp.name_to_initials("Sam Harris"), "S.H")
            self.assertEqual(temp.name_to_initials("patrick feeney"), "P.F")
            self.assertEqual(temp.name_to_initials("John Doe"), "J.D")
            self.assertEqual(temp.name_to_initials("Alice Wonderland"), "A.W")
        else:
            self.skipTest("Function 'name_to_initials' not available in module 'temp'.")

    def test_better_than_average(self):
        if 'better_than_average' in functions_available:
            self.assertTrue(temp.better_than_average([2, 3], 5))
            self.assertTrue(temp.better_than_average([100, 40, 34, 57, 29, 72, 57, 88], 75))
            self.assertTrue(temp.better_than_average([12, 23, 34, 45, 56, 67, 78, 89, 90], 69))
            self.assertFalse(temp.better_than_average([41, 75, 72, 56, 80, 82, 81, 33], 50))
            self.assertFalse(temp.better_than_average([29, 55, 74, 60, 11, 90, 67, 28], 21))
        else:
            self.skipTest("Function 'better_than_average' not available in module 'temp'.")

if __name__ == '__main__':
    loader = unittest.TestLoader()
    suite = loader.loadTestsFromTestCase(TestMain)

    result_file = os.path.join('script', 'result.txt')
    os.makedirs('script', exist_ok=True)

    with open(result_file, 'w') as f:
        runner = unittest.TextTestRunner(verbosity=2)
        result = runner.run(suite)
        if result.wasSuccessful():
            f.write("OK\n")
        else:
            f.write("FAILED\n")
