import random

import pygame

# from pygame.locals import *

WIDTH = 640
HEIGHT = 480
TITLE = "Simple Game"
class BlueCircle:
    def __init__(self):
        self.x = random.randint(0, WIDTH)
        self.y = random.randint(0, HEIGHT)
        self.radius = random.randint(10, 20)
        self.speed = random.randint(1, 3)
        self.color = (0, 255, 255)

    def move(self):
        self.x += self.speed
        if self.x > WIDTH:
            self.x = 0
        if self.y > HEIGHT:
            self.y = 0
        if self.x < 0:
            self.x = WIDTH
        if self.y < 0:
            self.y = HEIGHT

class Game:
    def __init__(self):
        pygame.init()
        pygame.display.set_caption(TITLE)
        self.screen = pygame.display.set_mode((WIDTH, HEIGHT))
        self.clock = pygame.time.Clock()
        self.circles = [BlueCircle() for _ in range(30)]

    def run(self):
        while True:
            self.clock.tick(60)
            self.event()
            self.update()
            self.draw()

    def event(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                exit()

    def update(self):
        for circle in self.circles:
            circle.move()

    def draw(self):
        self.screen.fill((255, 255, 255))
        for circle in self.circles:
            pygame.draw.circle(self.screen, circle.color, (circle.x, circle.y), circle.radius)
        pygame.display.update()


def main():
    game = Game()
    game.run()

if __name__ == "__main__":
    main()