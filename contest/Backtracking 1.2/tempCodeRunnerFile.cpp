  do
        {
            if (rec(0, 0))
            {
                possible = true;
                break;
            }
        } while (next_permutation(vt.begin(), vt.end()));