// #include <iostream>
// using namespace std;

// int main(){

//     int a[7] = {38,27,43,3,9,82,10};

//     int low = 0;
//     int high = 6;
//     int mid = (low + high) / 2;
//     // cout << mid << endl;

//     int b[mid + 1];

//     for (int i = 0; i <= mid; i++)
//     {
//         b[i] = a[i];
//     }
//     cout << "first half : ";
//     for (int i = 0; i <= mid; i++)
//     {
//         cout << b[i] << " ";
//     }

//     cout << endl;

//     int c[high - mid + 1];

//     for (int i = 0; i <= high - mid + 1; i++)
//     {
//         c[i] = a[mid + 1 + i];
//     }

//     cout << "second half : ";
//     for (int i = 0; i <= high - mid + 1; i++)
//     {
//         cout << c[i] << " ";
//     }

// }

#include <iostream>
using namespace std;

int main()
{
    int a[7] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    int temp[7];

    for (int size = 1; size < n; size *= 2)
    {
        for (int left = 0; left < n; left += 2 * size)
        {
            int mid = min(left + size - 1, n - 1);
            int right = min(left + 2 * size - 1, n - 1);

            int i = left, j = mid + 1, k = left;

            while (i <= mid && j <= right)
            {
                if (a[i] < a[j])
                    temp[k++] = a[i++];
                else
                    temp[k++] = a[j++];
            }

            while (i <= mid)
                temp[k++] = a[i++];

            while (j <= right)
                temp[k++] = a[j++];
        }

        // Copy temp back to a[]
        for (int i = 0; i < n; i++)
            a[i] = temp[i];
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
