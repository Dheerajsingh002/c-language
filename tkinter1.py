from tkinter import*
win=Tk()
def call():
    print("hello i am dheerakj")
l1=Label(win,text="hello World",bg="red",fg="black").pack(fill=X)
btn=Button(win,text="click me",command=call).pack()
win.mainloop()
