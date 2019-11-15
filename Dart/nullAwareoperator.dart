//Null aware operator 
//1.?. 2.?? 3.??=
class nam{
  var name="Nikhil saini";
}
main(List<String> args) {
  var n;
  var nik;
  //var n=nam();
  //var na=n.name;
  //var na=n?.name;
   var na=n?.name ??"nikhil saini";
  print(nik ??='NIkhil saini');

  print(na);
}