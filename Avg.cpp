#include<iostream>

	using namespace std;

	class Average
	{
		public:
		int firstNum,secondNum,thirdNum,fourthNum;
		float average;

		void getNumbers()
		{
				cout<<"\n\tEnter the first number : ";
				cin>>firstNum;

				cout<<"\n\tEnter the second number : ";
				cin>>secondNum;

				cout<<"\n\tEnter the third number : ";
				cin>>thirdNum;

				cout<<"\n\tEnter the four number : ";
				cin>>fourthNum;
			
		}

			
		float calculateAverage()
		{
			average=(firstNum+secondNum+thirdNum+fourthNum)/4;
			return average;
		}

	};

	int main()
	{
		Average O;

		float a;

		O.getNumbers();

		try
		{
			if(!(O.firstNum>=0&& O.firstNum<=100 && O.secondNum>=0&&O.secondNum<=100 && O.thirdNum>=0&&O.thirdNum<=100 && O.fourthNum>=0&&O.fourthNum<=100 ))
				throw(0);
			a=O.calculateAverage();
			cout<<"Average="<<a;
		}
		

		catch(int a)
		{
			cout<<"\n\t>>Specified marks out of range!"<<"\n\n";
		}
		
	}
