class Rectangle{
  var height,area,width=5;
  Rectangle(this.height);

  set areaofrect(var length)=>area=length*width;
  num get heightofrect=>height;
}

main(List<String> args) {
  var rec=Rectangle(29);
  print(rec.heightofrect);
  rec.areaofrect=34;
  print(rec.area);
}