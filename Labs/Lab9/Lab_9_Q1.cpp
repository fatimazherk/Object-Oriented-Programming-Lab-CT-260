// Define an abstract class ArrayMultiplier with a pure virtual function calculate().
//  Then, create two derived classes: ArrayMultiplier1D for 1D array multiplication 
//  and ArrayMultiplier2D for 2D array multiplication. In the calculate() 
// function of each derived class, perform the multiplication operation based 
// on the specific array dimension.

#include <iostream>
#include <vector>


using namespace std;


class ArrayMultiplier {
public:
    virtual void calculate() = 0;
};


class ArrayMultiplier1D : public ArrayMultiplier {
private:
    vector<int> array1;
    vector<int> array2;
    vector<int> result;


public:
    ArrayMultiplier1D(const vector<int>& arr1, const vector<int>& arr2)
        : array1(arr1), array2(arr2), result(arr1.size()) {}


    void calculate(){
        if (array1.size() != array2.size()) {
           cout << "Arrays must be of the same size for multiplication!" << endl;
            return;
        }


        for (size_t i = 0; i < array1.size(); ++i) {
            result[i] = array1[i] * array2[i];
        }


        cout << "1D Array Multiplication Result: ";
        for (const int& val : result) {
            cout << val << " ";
        }
        cout << endl;
    }
};


// Derived class for 2D array multiplication
class ArrayMultiplier2D : public ArrayMultiplier {
private:
    vector<vector<int>> array1;
    vector<vector<int>> array2;
    vector<vector<int>> result;


public:
    ArrayMultiplier2D(const vector<vector<int>>& arr1, const vector<vector<int>>& arr2)
        : array1(arr1), array2(arr2), result(arr1.size(), vector<int>(arr2[0].size(), 0)) {}


    // Overridden calculate function
    void calculate(){
        if (array1[0].size() != array2.size()) {
            cerr << "Number of columns in the first matrix must be equal to the number of rows in the second matrix!" << endl;
            return;
        }


        for (size_t i = 0; i < array1.size(); ++i) {
            for (size_t j = 0; j < array2[0].size(); ++j) {
                result[i][j] = 0;
                for (size_t k = 0; k < array1[0].size(); ++k) {
                    result[i][j] += array1[i][k] * array2[k][j];
                }
            }
        }


        cout << "2D Array Multiplication Result: " << endl;
        for (const auto& row : result) {
            for (const int& val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};


int main() {
    // Example for 1D array multiplication
    vector<int> arr1_1D = {1, 2, 3};
    vector<int> arr2_1D = {4, 5, 6};
    ArrayMultiplier1D multiplier1D(arr1_1D, arr2_1D);
    multiplier1D.calculate();


    // Example for 2D array multiplication
    vector<vector<int>> arr1_2D = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> arr2_2D = {{7, 8}, {9, 10}, {11, 12}};
    ArrayMultiplier2D multiplier2D(arr1_2D, arr2_2D);
    multiplier2D.calculate();


    return 0;
}


