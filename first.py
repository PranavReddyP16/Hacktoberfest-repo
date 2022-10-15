def loserify(print_func):
    def new_print_func(*args):
        print('whoever prints this sucks')
        print_func(args)

    return new_print_func