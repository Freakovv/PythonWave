import ast
import sys

def check_code(code):
    try:
        tree = ast.parse(code)
        has_a_assignment = False
        has_b_assignment = False
        has_c_assignment = False

        for node in ast.walk(tree):
            if isinstance(node, ast.Assign):
                if isinstance(node.targets[0], ast.Name):
                    if node.targets[0].id == 'a' and isinstance(node.value, ast.Constant) and node.value.value == 5:
                        has_a_assignment = True
                    elif node.targets[0].id == 'b' and isinstance(node.value, ast.Constant) and node.value.value == 5:
                        has_b_assignment = True
                    elif node.targets[0].id == 'c' and isinstance(node.value, ast.BinOp):
                        if isinstance(node.value.op, ast.Add):
                            if isinstance(node.value.left, ast.Name) and node.value.left.id == 'a' and isinstance(node.value.right, ast.Name) and node.value.right.id == 'b':
                                has_c_assignment = True

        if has_a_assignment and has_b_assignment and has_c_assignment:
            exec_globals = {}
            exec(code, exec_globals)
            return exec_globals.get('c', None)
        else:
            return None
    except Exception as e:
        return str(e)

if __name__ == "__main__":
    code = sys.stdin.read()
    result = check_code(code)
    if result is not None:
        print(result)
    else:
        print("Invalid code")
