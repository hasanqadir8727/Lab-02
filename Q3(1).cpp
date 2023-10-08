#include <iostream>

using namespace std;

class DSA{
	public:
	int SumOfArray(int arr[], int size){
    int sum=0;
    int expectedSum=0;
        for(int i=1;i<size;i++){
            sum+=arr[i];
        }
        for(int i=1;i<100;i++){
            expectedSum+=i;
        }
        sum-=expectedSum;
        return sum ;
    }
    void duplicateNumbers(int arr[], int size){
	int count=0;
		for(int i=0;i<size;i++ ){
			for(int j=i+1;j<size;j++){
				if(arr[i]==arr[j]){
					count++;
				}
				else{
					continue;
				}
	}
	if(count>0){
		cout<<arr[i]<<" is a duplicate number \n";
	}
	count=0;
}
	
}

	void MaxNum(int arr[], int size){
		int max=arr[0];
		for(int i=0;i<size;i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		cout<<"The maximum number of the array is: "<<max<<endl;
	}
	void MinNum(int arr[], int size){
		int min=arr[0];
		for(int i=0;i<size;i++){
			if(arr[i]<min){
				min=arr[i];
			}
		}
		cout<<"The minimum number of the array is: "<<min<<endl;
	}
	void removeDuplicateNumbers(int arr[], int size){
	int count=0;
	for(int i=0;i<size;i++ ){
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
				break;
			}
			else{
				continue;
			}
	}
	
	if(count>0){
		arr[i]=0;
		}
	count=0;
}	
	cout<<"Array after the removal of duplicate numbers: ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
}

void duplicateNumbersMoreThanTwice(int arr[], int size){
		for(int i=0;i<size;i++ ){
			int count=0;
			for(int j=i+1;j<size;j++){
				if(arr[i]==arr[j]){
					count++;
				}
	}
	if(count>1){
		cout<<arr[i]<<" is duplicated more than twice \n";
	}
	
}
}

	void sumOfNum(int arr[], int size,int targetNum){
		for(int i=0;i<size;i++){
			if(arr[i]+arr[i+1]==targetNum){
				cout<<"The sum of these two numbers is equal to the given number: ";
				cout<<arr[i]<<" and ";
				cout<<arr[i+1];
			}
			else{
				cout<<"None of the numbers sum to this value";
				break;
			}
		}
	}
	void targetNum(int arr[], int size,int targetNum){
		bool doesExist=false;
		for(int i=0;i<size;i++){
			if(arr[i]==targetNum){
				doesExist=true;
			}
		}
		if(doesExist){
			cout<<"The target number is present in the array";
		}
		else{
			cout<<"The target number does not exist in the array";
		}
	}
	void bubbleSort(int arr[], int size){
		int temp;
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		cout<<"Sorted Array:\n";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" \t";
		}	
}
};
int main(){
	DSA d;
    int array[100];
    for(int i=1;i<100;i++){
    	if(i==30){
    		array[i]=0;
		}
		else{	
        array[i]=i;
    }
    }
    cout<<"--Part A--\n";
    int missingNumber= d.SumOfArray(array,100);
    if(missingNumber<0){
        cout<<"The missing number is "<<-(missingNumber)<<"\n";
    }
    else{
        cout<<"There is no missing number\n\n";
    }
    
    cout<<"--Part B--\n";
    int array2[]={1,2,2,3,3,4,4,5};
    int size=sizeof(array2)/sizeof(array2[0]);
    cout<<"Array: ";
    for(int i=0;i<size;i++){
	cout<<array2[i]<<" \t";
	}
	cout<<"\n\n";
    d.duplicateNumbers(array2,size);
    
    cout<<"--Part C--\n";
	int array3[]={1,2,5,8,9,4};
	int size2=sizeof(array3)/sizeof(array3[0]);
	cout<<"Array: ";
	for(int i=0;i<size2;i++){
	cout<<array3[i]<<" \t";
	}
	cout<<"\n\n";
	d.MaxNum(array3,size2);
	d.MinNum(array3,size2);
	
	cout<<"--Part D--\n";
	int array6[]={1,2,3,4,5,8,9};
	int num;
	int size5=sizeof(array6)/sizeof(array6[0]);
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"Array: ";
	for(int i=0;i<size5;i++){
		cout<<array6[i]<<" \t";
	}
	cout<<"\n";
	d.sumOfNum(array6,size5,num);
	cout<<"\n";

	
	
	cout<<"--Part E--\n";
	int array5[]={1,2,2,3,3,3,4,4,5};
    int size4=sizeof(array5)/sizeof(array5[0]);
    cout<<"Array: ";
    for(int i=0;i<size4;i++){
	cout<<array5[i]<<" \t";
	}
	cout<<"\n\n";
    d.duplicateNumbersMoreThanTwice(array5,size4);
	
	cout<<"--Part F--\n";
	int array4[]={1,2,2,3,3,4,4,5};
	int size3=sizeof(array4)/sizeof(array4[0]);
	cout<<"Array before the removal of duplicate numbers: [";
	for(int i=0;i<size3;i++){
	cout<<array4[i]<<"\t";
}
	cout<<"]\n";
    d.removeDuplicateNumbers(array4,size);
    
    cout<<"\n";
    cout<<"--Part G--\n";
    int array7[]={1,2,3,7,8,9,10,13};
    int size6=sizeof(array7)/sizeof(array7[0]);
    int targetNum;
    cout<<"Enter a number: ";
	cin>>targetNum;
	cout<<"Array: ";
	for(int i=0;i<size6;i++){
		cout<<array7[i]<<" \t";
	}
	cout<<"\n";
	d.targetNum(array7,size6,targetNum);
	
	cout<<"--Part I--\n";
	int array8[]={1,5,7,3,2,9};
    int size7=sizeof(array8)/sizeof(array8[0]);
    cout<<"Unsorted Array: ";
	for(int i=0;i<size7;i++){
		cout<<array8[i]<<" \t";
	}
	cout<<"\n";
	d.bubbleSort(array8,size7);
}
