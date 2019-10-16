main(List<String> args) {
  var planet = ['jupiter', 'earth', 'saturn', 'uranus', 'neptune'];
  for (var i in planet) {
    print(i);
  }
  print('hello this is nikhl saini');
  String a = fun();
  print(planet.where((name) => name.contains('turn')));
  planet.where((name) => name.contains('uran')).forEach(print);
}

String fun() {
  return "nik";
}
