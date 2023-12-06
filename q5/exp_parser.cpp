//“11/(5+3x2)”
#include <iostream>
#include <string>

using namespace std;

int parseSpecificExponent(string s) {

    string modified_string = s;
    modified_string[7] = '*';

    int nums[] = {stoi(modified_string.substr(0, 2)), (int)(modified_string[4] - '0'), (int)(modified_string[6] - '0'), (int)(modified_string[8] - '0')};
    char operators[] = {modified_string[2], modified_string[5], modified_string[7]};

    double solution;
    int num_loc = 3;
    int op_loc =  2;

    
    //Start with first two
    switch (operators[op_loc]) {
        case '+':
            solution = nums[num_loc - 1] + nums[num_loc];
            break;
        case '-':
            solution = nums[num_loc - 1] - nums[num_loc];
            break;
        case '*':
            solution = nums[num_loc - 1] * nums[num_loc];
            break;

        case '/':
            solution = nums[num_loc - 1] * nums[num_loc];
            break;
    }

    op_loc--;
    num_loc -= 2;
    
    //Parse the rest of them
    for (int i = num_loc; i >= 0; i--) {
        switch (operators[op_loc]) {
            case '+':
                solution = nums[i] + solution;
                break;
            case '-':
                solution = nums[i] - solution;
                break;
            case '*':
                solution = nums[i] * solution;
                break;

            case '/':
                solution = nums[i] / solution;
                break;
        }
        op_loc--;

    }

    return solution;
}

int main() {
    string given_string = "11/(5+3x2)";
    int solution = parseSpecificExponent(given_string);

    cout << solution << "\n";
    

}