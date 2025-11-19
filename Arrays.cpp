#include <iostream>
using namespace std;

class array
{
private:
    int size;
    int capacity;
    int *arr;

public:
    array(int capacity)
    {
        this->size = 0;
        this->capacity = capacity;
        arr = new int[capacity];
    }

    void insertatbeg(int val)
    {
        if (size == capacity)
        {
            cout << "array is full;" << endl;
            return;
        }
        for (int i = size; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = val;
        size++;
    }

    void deleteatbeg(){
        if (size<=0)
            {
                cout<<"empty array"<<endl;
                return;
            }
        for (int i = 0; i < size-1; i++)
        {
            arr[i]=arr[i+1];
        }
    }

    void insertatend(int val)
    {
        if (size == capacity)
        {
            cout << "array is full;" << endl;
            return;
        }
        arr[size] = val;
        size++;
    }

    void deleteatend(){
        if (size<=0)
            {
                cout<<"empty array"<<endl;
                return;
            }
        size--;
    }

    void insertatpos(int val, int pos)
    {
        if (size == capacity)
        {
            cout << "array is full;" << endl;
            return;
        }
        for (int i = size; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = val;
        size++;
    }

    void deleteatpos(int pos){
        if (size == capacity)
        {
            cout << "array is full;" << endl;
            return;
        }
        for (int i = pos-1; i < size-1; i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
};

int main()
{
    array array(12);
    int choice;
    while (true)
    {
        cout << " 1.INSERT AT BEGINNING OF ARRAY 
                    / n 2.INSERT AT END OF ARRAY
                    / n 3.INSERT AT ANY POSITION OF ARRAY 
                    / n 4.DELETE AT BEGINNING OF ARRAY
                    / n 5.DELETE AT END OF ARRAY
                    / n 6.DELETE AT ANY POSITION OF ARRAY
                    / n 7.PRINT OF ARRAY 
                    / n 8.EXIT "<<endl;

        cin>>choice;
        if (choice == 1)
        {
            int val;
            cout << "Enter the Value" << endl;
            cin >> val;
            insertatbeg(val);
        }
        else if (choice == 2)
        {
            int val;
            cout << "Enter the Value" << endl;
            cin >> val;
            insertatend(val);
        }
        else if (choice == 3)
        {
            int val, pos;
            cout << "Enter the Value" << endl;
            cin >> val;
            cout << "Enter the Position" << endl;
            cin >> pos;
            insertatpos(val, pos);
        }
        else if (choice ==4)
        {
            deleteatbeg();
        }
        else if (choice==5)
        {
            deleteatend();
        }
        else if (choice==6)
        {
            int pos;
            cout<<"Enter Position:"<<endl;
            cin>>pos;
            deleteatpos(pos);
        }
        
        else if (choice == 7)
            {
                for (int i = 0; i < size; i++)
                {
                    cout << arr[i] << endl;
                }
            }
            else if (choice == 8)
            {
                return;
            }
            else
            {
                cout << "invalid choice" << endl;
            }
        }
        return 0;
    }