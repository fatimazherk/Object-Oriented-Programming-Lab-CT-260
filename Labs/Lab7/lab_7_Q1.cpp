#include<iostream>
#include<string>
using namespace std;

class Array{
    int** data;
    int rows;
    int cols;
    void allocateMemory(int r,int c){
        rows=r;
        cols=c;
        data=new int*[rows];
        for(int i=0;i<rows;i++){
            data[i]=new int[cols]();
        }
    }
    void copyData(const Array& other){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                data[i][j]=other.data[i][j];
            }
        }
    }
    public:
    Array():data(nullptr),rows(0),cols(0){}
    Array(int r,int c){
        allocateMemory(r,c);
    }
    Array(const Array& other){
        allocateMemory(other.rows,other.cols);
        copyData(other);
    }
    ~Array(){
        for(int i=0;i<rows;i++){
            delete[] data[i];
        }
        delete[] data;
    }
    Array& operator=(const Array& other){
        if(this !=&other){
            for(int i=0;i<rows;i++){
                delete[] data[i];
                delete[] data;
                allocateMemory(other.rows,other.cols);
                copyData(other);
            }
            return *this;
        }
    }
    Array operator+(const Array& other){
        if(rows!=other.rows || cols!=other.cols){
            cout<<"array dimensions must match for addition. "<<endl;
            return Array();
        }
        Array result(rows,cols);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                result.data[i][j]=data[i][j]+other.data[i][j];
            }
        }
        return result;
    }
     Array operator-(const Array& other){
        if(rows!=other.rows || cols!=other.cols){
            cout<<"array dimensions must match for subtraction. "<<endl;
            return Array();
        }
        Array result(rows,cols);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                result.data[i][j]=data[i][j]-other.data[i][j];
            }
        }
        return result;
    }

     Array operator*(const Array& other){
        if(rows!=other.rows || cols!=other.cols){
            cout<<"array dimensions must match for multiplication. "<<endl;
            return Array();
        }
        Array result(rows,cols);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                result.data[i][j]=data[i][j]*other.data[i][j];
            }
        }
        return result;
    }

    int* operator[](int index){
        if(index<0 || index>=rows){
            cout<<"index out of range "<<endl;
            return nullptr;
        }
        return data[index];
    }

    const int* operator[](int index) const{
         if(index<0 || index>=rows){
            cout<<"index out of range "<<endl;
            return nullptr;
        }
        return data[index];
    }
    void print() const{
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Array arr1;
    
    Array arr2(2,3);
    arr2[0][0]=1; arr2[0][1]=2; arr2[0][2]=5;
    arr2[1][0]=4; arr2[1][1]=5; arr2[1][2]=6;
    cout<<"array 2: "<<endl;
    arr2.print();

    Array arr3=arr2;
    cout<<"array 3: "<<endl;
    arr3.print();

    Array arr4(2,3);
    arr4=arr2;
    cout<<"array 4: "<<endl;
    arr4.print();

    Array arr5=arr2+arr4;
    cout<<"array5: "<<endl;
    arr5.print();
    
    Array arr6=arr2-arr4;
    cout<<"array 6: "<<endl;
    arr6.print();

    Array arr7=arr2*arr4;
    cout<<"array 7: "<<endl;
    arr7.print();
}