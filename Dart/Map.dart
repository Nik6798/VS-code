main(List<String> args) {
  Map <String,String> rol={'name':'Nikhil','class':"noclass"};
  var map=Map();
  print(map.runtimeType);
  map['country']='japan';
  print(map);
  print(rol);
  print(rol['name']);
}