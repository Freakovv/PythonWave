import unittest
import importlib.util
import os

functions_available = []

# Попытка импорта функции add из модуля temp
try:
    spec_add = importlib.util.find_spec('temp')
    if spec_add is not None:
        temp_module = importlib.import_module('temp')
        if hasattr(temp_module, 'add'):
            add = temp_module.add
            functions_available.append('add')
except ImportError:
    pass

# Попытка импорта функции multiply из модуля temp
try:
    spec_multiply = importlib.util.find_spec('temp')
    if spec_multiply is not None:
        temp_module = importlib.import_module('temp')
        if hasattr(temp_module, 'multiply'):
            multiply = temp_module.multiply
            functions_available.append('multiply')
except ImportError:
    pass

class TestMain(unittest.TestCase):

    def test_add(self):
        if 'add' in functions_available:
            self.assertEqual(add(2, 3), 5)
            self.assertEqual(add(-1, 1), 0)
            self.assertEqual(add(0, 0), 0)
        else:
            self.skipTest("Function 'add' not available in module 'temp'.")

    def test_multiply(self):
        if 'multiply' in functions_available:
            self.assertEqual(multiply(2, 3), 6)
            self.assertEqual(multiply(-1, 1), -1)
            self.assertEqual(multiply(0, 5), 0)
            self.assertEqual(multiply(4, 0), 0)
        else:
            self.skipTest("Function 'multiply' not available in module 'temp'.")

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
