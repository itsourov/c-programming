int ans = (r - l) / m;

    if (l % m == 0)
        ans++;
    if (r % m == 0)
        ans++;
    cout << ans << endl;