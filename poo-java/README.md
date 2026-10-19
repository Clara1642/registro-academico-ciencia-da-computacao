# Programação Orientada a Objetos em Java

Projetos e exercícios da disciplina de POO, cada um em sua própria pasta com as classes correspondentes.

## Fundamentos

`Exercicio1` a `Exercicio9`, `ExercicioRevisao`, `Revisao` — sequência de exercícios introdutórios: classes, atributos, métodos, encapsulamento (getters/setters).

## Herança, interfaces e polimorfismo

- `FormaGeometrica` — hierarquia de formas com cálculo de área
- `AnimaisESons` — herança com sobrescrita de método
- `VeiculosTiposMotor` — herança aplicada a tipos de veículo
- `InterfaceImprimivel`, `InterfaceAutenticavel`, `InterfaceMultiplas` — uso de interfaces, incluindo uma classe implementando mais de uma interface

## Sistemas com tratamento de exceções

A maior parte do repositório: sistemas modelados com classes de exceção próprias (`throws`/`throw`), cobrindo domínios variados:

- **Bancário**: `SistemaBancario`, `SistemaBancario3`, `SistemaBancarioComLimiteDiario`, `ContasBancarias`
- **Biblioteca**: `SistemaBiblioteca`, `SistemaBiblioteca1`, `SistemaBiblioteca3`, `BibliotecaUniversitaria`
- **Serviços e entregas**: `PlataformaDeEntregas`, `EstacionamentoInteligente`, `SistemaRestaurante`, `SistemaCafeteria`, `SistemaViagem`
- **Educação e RH**: `SistemaEscolar`, `BoletimEscolar`, `SistemaDeFuncionarios`, `AcademiaPorMetas`
- **Entretenimento**: `SistemaDeStreamingDeMusicas`, `PlaylistDeMusicas`, `RedeSocial`, `RpgPorTurnos`, `SistemaRPG`, `TorneioEsportivo`, `CampeonatoNatacao`
- **Outros**: `SistemaHospitalar`, `SistemaDeArquivos`, `RelatorioDeVendasRegiao`

## Simulados e provas

`Simulado1GQ`, `Simulado21`, `Simulado2GqsemExcessoes`, `Prova2Gq1Chamada` — exercícios feitos sob controle de tempo.

## Como compilar e rodar

```bash
cd SistemaBancario
javac *.java
java Main
```

Todas as pastas compilam sem erros ou avisos.
