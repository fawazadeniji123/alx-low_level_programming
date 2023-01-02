class Rectangle:
  def __init__(self, width, height):
    self.width = width
    self.height = height
  
  def __dict__(self):
    return {'_Rectangle__width': self.width, '_Rectangle__height': self.height}

