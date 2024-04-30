    int SLargest = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > SLargest && arr[j] != largest)
        {
            SLargest = arr[j];
        }
    }

    cout << "Second Largest :" << SLargest;