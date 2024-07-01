import os

def main():
    commands = [
        "rm -rf dump.vcd __pycache__/ sim_build/ results.xml",
        "make"
    ]

    for command in commands:
        print(f"**************************\nRunning command: {command}\n**************************")
        os.system(command)

if __name__ == '__main__':
    main() 