from turtle import *
color('red', 'yellow')
begin_fill()
while True:
    forward(200)
    left(170)
    if abs(pos()) < 1:
        break
end_fill()
done()
#25-using-turtle-library-of-python-to-draw
#we can also import like this
#from turtle import *
import turtle
wn=turtle.Screen()
wn.bgcolor('light green')
wn.title('Turtle')
turrr=turtle.Turtle()
turrr.forward(100)
turtle.done()