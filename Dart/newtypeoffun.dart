main(List<String> args) {
  var add5 = makeAdder(5.0);
  print(add5(20.0));
}

double add(double x, double y) => x + y;

Function makeAdder(double val) {
  return (x) => add(val, x);
}
