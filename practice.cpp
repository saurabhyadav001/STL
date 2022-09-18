#include <iostream>
using namespace std;
int queue[100], n = 100, front = -1, rear = -1;
void Insert()
{
    int val;
    if (rear == n - 1)
        cout << "queue overflow" << endl;
    else
    {
        if (front == -1)
            front = 0;
        cout << "Insert the elements in queue" << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}
void Delete()
{
    if (front == -1 || front > rear)
    {
        cout << "queue Underflow";
        return;
    }
    else
    {
        cout << "element deleted are:" << queue[front] << endl;
        front++;
    }
}

void Display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}
int main()
{
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            Insert();
            break;
        }
        case 2:
        {
            Delete();
            break;
        }
        case 3:
        {
            Display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}

// // #include<bits/stdc++.h>  //stack ambiguity..
// #include <iostream>
// using namespace std;
// int stack[50], n = 50, top = -1;
// void push(int val)
// {
//     if (top >= n - 1)
//     {
//         cout << "stack overflow" << endl;
//     }
//     else
//     {
//         top++;
//         stack[top] = val;
//     }
// }
// void pop()
// {
//     if (top <= -1)
//     {
//         cout << "stack Underflow" << endl;
//     }
//     else
//     {
//         cout << "popped element" << stack[top] << endl;
//         top--;
//     }
// }
// void display()
// {
//     if (top >= 0)
//     {
//         for (int i = top; i >= 0; i--)
//         {
//             cout << stack[i] << " " << endl;
//         }
//     }
//     else
//     {
//         cout << "stack is empty" << endl;
//     }
// }
// int main()
// {
//     int ch, val;
//     cout << "1> Push" << endl;
//     cout << "2> Pop" << endl;
//     cout << "3> Display" << endl;
//     cout << "4> Quite" << endl;
//     do
//     {
//         cout << "enter Your Choice's" << endl;
//         cin >> ch;
//         switch (ch)
//         {
//         case 1:
//         {
//             cout << "enter the value to be pushed" << endl;
//             cin >> val;
//             push(val);
//             break;
//         }
//         case 2:
//         {
//             pop();
//             break;
//         }
//         case 3:
//         {
//             display();
//             break;
//         }
//         case 4:
//         {
//             cout << "Exit" << endl;
//             break;
//         }
//         default:
//         {
//             cout << "Invalid Criteria" << endl;
//         }
//         }
//     } while (ch != 4);
//     return 0;
// }