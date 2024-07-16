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

    int getRows() const{
        return rows;
    }
    int getCols() const{
        return cols;
    }
};

bool searchMatrix(const Array& matrix, int target){
    int rows=matrix.getRows();
    int cols=matrix.getCols();
    if(rows==0 || cols==0){
        return false;
    }
    int left=0;
    int right=rows*cols-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        int midValue=matrix[mid/cols][mid%cols];

        if(midValue==target){
            return true;
        }
        else if(midValue<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return false;
}

int main(){
   Array matrix(3,4);
   matrix[0][0]=1; matrix[0][1]=3; matrix[0][2]=5; matrix[0][3]=7;
   matrix[1][0]=10; matrix[1][1]=11; matrix[1][2]=16; matrix[1][3]=20;
   matrix[2][0]=23; matrix[2][1]=30; matrix[2][2]=34; matrix[2][3]=50;

   cout<<"matrix: "<<endl;
   matrix.print();
   
   int target=3;
   bool found=searchMatrix(matrix,target);
   cout<<target<<(found? " true" :" false ")<<endl;

   target=13;
   found=searchMatrix(matrix,target);
   cout<<target<<(found? " true":" false ")<<endl;
}