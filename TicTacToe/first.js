document.addEventListener("DOMContentLoaded", function () {
    let boxes = document.querySelectorAll(".box");
    let resetBtn = document.querySelector("#reset_btn");
    let newGameBtn = document.querySelector("#new_btn");
    let msgContainer = document.querySelector(".msg-container");
    let msg = document.querySelector("#msg");
    let turnO = true;

    const winPatterns = [
        [0, 1, 2],
        [0, 3, 6],
        [0, 4, 8],
        [1, 4, 7],
        [2, 5, 8],
        [2, 4, 6],
        [3, 4, 5],
        [6, 7, 8],
    ];

    const resetGame = () => {
        turnO = true;
        enableBoxes();
        msgContainer.classList.add("hide");
        boxes.forEach((box) => {
            box.removeAttribute("data-clicked");
            box.innerText = "";
        });
    };

    const disableBoxes = () => {
        boxes.forEach((box) => {
            box.disabled = true;
        });
    };

    const enableBoxes = () => {
        boxes.forEach((box) => {
            box.disabled = false;
        });
    };

    const showWinner = (winner) => {
        msg.innerText = `Congratulations, winner is ${winner}`;
        msgContainer.classList.remove("hide");
        disableBoxes();
    };

    const checkWinner = () => {
        for (let pattern of winPatterns) {
            let pos1Val = boxes[pattern[0]].innerText;
            let pos2Val = boxes[pattern[1]].innerText;
            let pos3Val = boxes[pattern[2]].innerText;
            if (pos1Val != "" && pos2Val != "" && pos3Val != "") {
                if (pos1Val === pos2Val && pos2Val === pos3Val) {
                    showWinner(pos1Val);
                }
            }
        }
    };

    boxes.forEach((box) => {
        box.addEventListener("click", () => {
            if (!box.hasAttribute("data-clicked")) {
                if (turnO) {
                    box.innerText = "O";
                    turnO = false;
                } else {
                    box.innerText = "X";
                    turnO = true;
                }
                box.setAttribute("data-clicked", true);
                checkWinner();
            }
        });
    });

    newGameBtn.addEventListener("click", resetGame);
    resetBtn.addEventListener("click", resetGame);
});
