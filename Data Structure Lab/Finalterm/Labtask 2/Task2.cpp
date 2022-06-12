#include <iostream>
#include <algorithm>
using namespace std;

    int BinarySearch(int array[], int l, int m, int n){
    if (m >= l)
    {
        int mid = l + (m - l) / 2;

        if (array[mid] == n)
            return mid;

        if (array[mid] > n)
            return BinarySearch(array, l, mid - 1, n);

        return BinarySearch(array, mid + 1, m, n);
    }

    return -1;
}

    int main(void)
{
    int p;
    cout << "Array size: " << endl;
    cin >> p;
    int *array = new int[p];
    cout << "Array input:" << endl;
    for (int i = 0; i < p; i++)
    {
        cin >> array[i];
    }
    sort(array, array + p);
    int n;
    cout << "Array sorted:" << endl;
    for (int i = 0; i < p; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Which element do you want to search? " << endl;
    cin >> n;

    int result = BinarySearch(array, 0, p - 1, n);
    (result == -1)
    ? cout << "Not present"
    : cout << "Index no: " << result;
    return 0;
}
