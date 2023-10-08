#include<iostream>
using namespace std;
class DSA{
    private:
    int *data;
    int size;
    public:
        DSA(){
         data=NULL;
         size=0;
        }
        DSA(int n){
            size=n;
            data=new int [size];
            memset(this->data,0,sizeof(int)*size);
        }
        DSA(const DSA & ptr){
            this->size=ptr.size;
            this->data=new int [size];
            memcpy(this->data,ptr.data,(sizeof(int)*ptr.size));
        }
        ~DSA(){
        	if(data!=0){
        		cout<<"Process of deleting";
        		delete[] data;
        		data=0;
        		size=0;
			}
		}



};
int main(){
	
}