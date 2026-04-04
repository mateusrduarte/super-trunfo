# Super Trunfo

Projeto introdutorio em C para cadastro de uma carta de Super Trunfo pelo terminal.

## O que o programa faz

- Solicita qual carta sera cadastrada.
- Le os campos estado, codigo, nome da cidade, populacao, area, PIB e pontos turisticos.
- Calcula a densidade populacional e o PIB per capita a partir dos dados informados.
- Exibe na tela os dados da carta cadastrada ao final da entrada.

## Arquivos do repositorio

- `main.c`: codigo-fonte principal do programa.
- `.gitignore`: regras para ignorar binarios e arquivos locais da IDE.

## Como compilar

Exemplo com GCC:

```bash
gcc main.c -o main
```

No Windows, o executavel gerado normalmente sera `main.exe`.

## Como executar

No Linux ou macOS:

```bash
./main
```

No PowerShell:

```powershell
.\main.exe
```

## Observacoes

- O projeto esta focado em praticar entrada e saida de dados em C.
- O valor do PIB deve ser informado em bilhoes de reais.
- O repositorio ignora arquivos compilados e configuracoes locais da IDE para manter o versionamento limpo.
