 while (temp <= n * n) {
//     i--;
//     j++;
//   cout<<"!"<<temp<<i<<j<<" ";
//     if (a[i][j] == -1) {
//         i+=2;
//         j-=1;
//       a[i][j] = temp;

//        cout<<"a"<<temp<<i<<j<<" ";
//     } 
//     else if (a[i][j] == 0) {
//         cout<<"@"<<temp<<i<<j<<" ";
//       if (i ==0) {
//         i = n;
//         a[i][j] = temp;
//         cout<<"b"<<temp<<i<<j<<" ";
       
//       }
//       else if(j>3){
//         j=1;
//         a[i][j]=temp;
//          cout<<"c"<<temp<<i<<j<<" ";
//       }
//       a[i][j]=temp;
//     } else {
//       i+=2;
//       j--;
//       a[i][j] = temp;
//       cout<<"d"<<temp<<i<<j<<" ";
//     }
//     temp++;
//   }