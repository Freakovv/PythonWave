import unittest
import importlib.util
import os
import temp  # Импорт модуля temp, в котором определены функции add, multiply, divide, subtract


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

    def test_subtract(self):
        if 'subtract' in functions_available:
            self.assertEqual(temp.subtract(5, 3), 2)
            self.assertEqual(temp.subtract(10, 5), 5)
            self.assertEqual(temp.subtract(0, 0), 0)
            self.assertEqual(temp.subtract(-1, -1), 0)
        else:
            self.skipTest("Function 'subtract' not available in module 'temp'.")


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
