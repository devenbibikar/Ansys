#parse and print the given equation
def parse_equation(string_input):
    modified_string = given_string.replace("x", "*")
    print(eval(modified_string))

given_string = "11/(5+3x2)"
parse_equation(given_string);
