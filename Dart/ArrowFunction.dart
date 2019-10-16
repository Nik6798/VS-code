main(List<String> args) {
  
  printdata(square(1024));
}

// dynamic square(int n){
//   return n*n;
// }
dynamic square(int n) => n*n;//this is called arrow function

void printdata(var d){
  print(d);
}