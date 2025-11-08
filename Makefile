# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -O2 -Ilibs   # -Ilibs = permite incluir cabeçalhos das libs

# Diretórios e arquivos
SRC = src/main.c libs/Tocar/Tocar.c libs/Verificar/Verificar.c
OUT_DIR = build
OUT = $(OUT_DIR)/TrPlayer

# Alvo padrão: apenas compilar
all: $(OUT)
	@echo "✅ Compilado com sucesso: $(OUT)"

# Regra de compilação
$(OUT): $(SRC)
	@mkdir -p $(OUT_DIR)
	@echo "🔧 Compilando fontes..."
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

# Limpeza
clear:
	@echo "🧹 Limpando build..."
	@rm -rf $(OUT_DIR)

.PHONY: all clear
