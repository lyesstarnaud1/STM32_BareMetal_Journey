#  PA5 Toggle via Bit-field Abstraction

### 🏆 Achievements & & Lessons
1. **Bit-field Abstraction:** Moved from raw bit-shifting to C Bit-field structures in `main.h`. This allows for human-readable code like `p_clk_en->GPIOAEN = 1`.
2. **Const-Volatile Pointer Mastery:** Implemented the industry-standard pointer declaration: `Type volatile *const p_reg`.
   - `volatile`: Ensures the compiler does not optimize away hardware-dependent reads/writes.
   - `*const`: Ensures the hardware address is immutable, preventing accidental pointer reassignment.
3. **Register Hygiene:** Implemented a "Clear-then-Set" strategy for the `MODER` register to ensure the pin is in the exact desired state regardless of its previous configuration.

### 🧠 Mathematical Logic
- **Memory Alignment:** Verified that bit-field sizes match the 32-bit register width.
- **Clock Tree:** Identified the specific bit-offset in `RCC_AHB1ENR` to power the GPIOA rail.
### 🛠 Debugging:
- **Result:** Successfully toggled PA5 at a hardware level without using ST's HAL libraries.
