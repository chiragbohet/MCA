import turtle

def draw_square(some_turtle):
    '''
    Objective : To draw a square
    Input Parameters : None
    Output : The square is printed on screen
    '''

    for i in range(0,4):
        some_turtle.forward(100)
        some_turtle.right(90)

def draw_circle(some_turtle):
    '''
    Objective : To draw a Circle
    Input Parameters : None
    Output : The Circle is printed on screen
    '''
    some_turtle.circle(100)

def draw_triangle(some_turtle):
    '''
    Objective : To draw a Triangle
    Input Parameters : None
    Output : The Triangle is printed on screen
    '''
    for i in range(0, 3):
        some_turtle.forward(100)
        some_turtle.right(120)

def draw_art():
    '''
    Objective : To draw various shapes on the screen and setting up the sceen/window
    Input Parameters : None
    Output : The output of the respective functions.
    '''

    #creating a window for the shapes
    window = turtle.Screen()
    window.bgcolor("red")
    
    #creating first turtle, adding its attributes and then drawing it
    brad = turtle.Turtle()
    brad.shape("turtle")
    brad.color("yellow")
    brad.speed(1)
    draw_square(brad)

    #creating second turtle, adding its attributes and then drawing it
    angie = turtle.Turtle()
    angie.shape("arrow")
    angie.color("green")
    draw_circle(angie)

    #creating third turtle
    tom = turtle.Turtle()
    tom.shape("classic")
    tom.color("black")
    draw_triangle(tom)

    window.exitonclick()


draw_art()
