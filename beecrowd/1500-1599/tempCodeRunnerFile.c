  if (i == 0 || getDiff(guess, secreatNumber) < getDiff(closestNumber, secreatNumber))
            {
                closestNumber = guess;
                position = i;
            }