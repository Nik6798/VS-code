import 'dart:io';
void main(List<String> args) {
  stdout.writeln("Enter the input :");
  dynamic name=stdin.readLineSync();
  print('My name is $name');
  name="sain";
  print("$name");
}