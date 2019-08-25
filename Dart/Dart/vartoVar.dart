main(List<String> args) {
  var num="33";
  //string to int
var a=int.parse(num);

//string to double
var b=double.parse(num);
print("$a $b");


//int to string
var c=22.toString();
var d=22.33.toString();
var e=333.22222232.toStringAsPrecision(5);

print("$c and $d and $e");
}