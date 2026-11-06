while True:
    try:
        command = input("> ").strip()
    except EOFError:
        break

    if command == "mommy":
        print("good boy")
    elif command in ("exit", "quit"):
        break
    else:
        print(f"there's no limit to the larp")
