int n, q;
    cin >> n >> q;
    int arr[n];
    int ps[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            ps[i] = arr[i];
        }
        else
        {
            ps[i] = ps[i - 1] + arr[i];
        }
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << ps[r - 1] - ps[l - 1] << endl;
    }