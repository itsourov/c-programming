bool goLeft(int i, int j)
// {
//     if (j < 0)
//         return false;
//     if (arr[i][j])
//         return true;

//     return goLeft(i, j - 1);
// }
// bool goRight(int i, int j)
// {
//     if (j >= col)
//         return false;
//     if (arr[i][j])
//         return true;

//     return goLeft(i, j + 1);
// }
// bool goUp(int i, int j)
// {
//     if (i < 0)
//         return false;
//     if (arr[i][j])
//         return true;

//     return goLeft(i - 1, j);
// }
// bool goDown(int i, int j)
// {
//     if (i >= row)
//         return false;
//     if (arr[i][j])
//         return true;

//     return goLeft(i + 1, j);
// }