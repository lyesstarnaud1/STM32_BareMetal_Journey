# Project: PA5 Toggle via Register Mapping

### 🧠 The Logic
- **Base Address:** 0x40020000 (GPIOA)
- **Offset Logic:** Used `0x30` for RCC_AHB1ENR and `0x18` for BSRR inside the GPIO typedef struct (each uint32 register has 4 bytes).
- **Bit Manipulation:** Atomic set/reset using the 32-bit BSRR register (The BSRR is write only we used  '=' instead if '|='). 
- **Discovery:** The bits from 0 to 15 are set bits for each pin ,while the bits from 16 to 31 are reset for each pin (1 is set/reset value)
### 🛠 Debugging Notes
- **Problem:** Pin didn't toggle.
- **Discovery:** Peripherals are unpowered by default.
- **Solution:** Enabled RCC AHB1 clock for Port A before register access

