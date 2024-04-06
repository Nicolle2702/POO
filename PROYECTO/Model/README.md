[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/MEPNEakM)
# Proyecto POO [PARTE 1]: Sistema de Gestión de Eventos de comedia

## Descripción General
Los eventos de comedia se han popularizado por todo el país, y el éxito de los comediantes ha llevado a la necesidad de tener un sistema de información que permita la gestión de los shows y los elementos que allí convergen. En ese orden de ideas, este proyecto busca el desarrollo de un sistema de gestión de eventos enfocado en eventos de comedia que permita a los administradores crear, editar y eliminar eventos, gestionar la boletería y generar reportes. Para este proyecto, deberán usar sus conocimientos en Programación Orientada a Objetos y codificación en C++.

## Tipos de Eventos
El sistema debe manejar tres tipos específicos de eventos, cada uno con particularidades propias:

### Criterios de aceptación:
- Se deben manejar 3 tipos de eventos en el sistema: evento en Bar, evento en Teatro, y evento Filantrópico (boletería sin costo).
- El evento Bar puede pagar para que los comediantes se presenten, además la boletería puede tener una proporción de utilidad para el bar (20 % para el bar, 80 % para el artista).
- El evento en Teatro tiene en particular que se debe pagar un valor por el alquiler del teatro, y por tener una amplia cantidad de asistentes en este tipo de eventos, la tiquetera se quedará con el 7% de cada boleta vendida.
- El evento Filantrópico no maneja costo de alquiler, y las boleterías se ofrecen en cero pesos, pero cada cliente debe solicitar la boletería como si se estuviera vendiendo, sólo que por cero pesos. Lo particular de este evento es que los ingresos se adquieren con patrocinadores, así que se necesita quiénes son los patrocinadores (nombre) y el valor aportado.
- El sistema permite ingresar detalles del evento como: artista o artistas del show, nombre, fecha, hora de apertura de puertas, hora del show, lugar, dirección, y ciudad.
- El sistema permite definir el estado del evento (realizado, por realizar, cancelado, aplazado, cerrado). Cambios en el estado "realizado" están restringidos.
- El administrador puede definir precios de boletas para diferentes categorías y fases de venta (preventa y venta regular).
- Se impide la eliminación de eventos con boletería vendida.
- El sistema permite definir el aforo total del evento.

## Gestión de boletería

### Criterios de aceptación:
- Se requieren datos del comprador y cómo se enteró del evento al vender una boleta.
- El sistema verifica la disponibilidad de aforo antes de completar la venta.
- El precio de la boleta varía según la fase de venta y aplicaciones de descuentos.
- Las boletas de cortesía se pueden emitir con un precio de cero.
- Se debe registrar el medio de pago utilizado.

## Generación de Reportes Detallados
Para el usuario es necesario generar reportes detallados basados en las ventas de boletas, asistencia, finanzas del evento y los datos de los compradores para analizar el rendimiento del evento y mejorar la planificación futura. Todos los reportes presentados a continuación deben ser presentados por consola.

### Criterios de aceptación:
- Reporte de Ventas de Boletas: Detalla cantidad de boletas vendidas por tipo (incluyendo cortesías), dinero por ingresos totales por preventa y venta regular.
- Reporte Financiero: Desglosa los ingresos por tipo de pago y por tipo de boletería.
- Reporte de Datos de los Compradores: Proporciona información detallada de los compradores permitiendo análisis demográficos y de comportamiento para estrategias de marketing.
- Reporte de Datos por artista: Dado un artista, será posible reportar datos generales de sus eventos gestionados en el sistema. En los datos generales de cada evento deben estar cosas como (nombre del evento, fecha, lugar, cantidad de boletas vendidas, porcentaje de aforo cubierto)

## Requerimientos Técnicos
Se deben aplicar conocimientos de análisis y diseño UML, aplicación de Herencia, sobreescritura, sobrecarga, clases abstractas y concretas, y codificación en C++. Uso de repositorios utilizando Github y buenas prácticas de programación y documentación.

### Mínimos esperados (no cuentan en la nota pero sin esto no se califica el proyecto):
- Uso continuo de git para mantener el histórico de avance de su proyecto con comentarios claros sobre los cambios de su programa.
- Tener un menú usando do while y switch case para acceder a las diferentes opciones del programa.
- Cumplir con el estándar de codificación lowerCamelCase.
- Código documentado para hacerlo claro para cualquier lector. En la documentación, sus comentarios deben explicar por qué se hacen las cosas, más que solo describir literalmente las líneas de código.
- Buenas prácticas de programación: buen nombramiento, sin números mágicos, uso de constantes.

## Entregables
- Código fuente del programa. Use este github classroom para iniciar el proyecto: [URL]
- Informe de autoevaluación: documento en el que explique qué problemas tuvo al hacer su proyecto, qué aprendió, qué le gustó, que no le gustó, qué hizo cada uno de los miembros del equipo, qué nota se pondrían de manera individual y qué nota le pondrían al compañero junto con la justificación. Cada persona del equipo debe entregar un informe individual.
- README en el repositorio [Manual técnico]: Con presentación general del proyecto, principales funciones, imágenes del proyecto corriendo y explicación de las principales funcionalidades de la aplicación funcionando, imagen del diagrama UML (uno por equipo).

Fecha de entrega: viernes 5 de abril del 2024. 11:59pm. Las sustentaciones serán en la semana del 8 al 12 de abril de 2024. El profe será su cliente así que puede solicitarme información, reuniones o apoyo ya sea como cliente o cómo profe, no hay problema.

## Calificación
- Autoevaluación: 5%
- Calificación del compañero: 5%. En trabajos individuales, la autoevaluación tendrá un 10% de peso. Equipos de máximo dos personas.
- Calificación de los profesores: compuesta por entregables, diseño, funcionalidad, estilo de codificación y mejores prácticas: 90%. La rúbrica de evaluación explica los elementos que se consideran para la calificación del proyecto.
- Propiedad intelectual: valor entre 0 y 1 que multiplica la calificación total. Se demuestra durante la sustentación.
- Nota final = (criterios evaluacion%) * propiedadIntelectual

### Rúbrica de evaluación
| Criterio | 5 | 4 | 3 | 2 | 1 | 0 |
|----------|---|---|---|---|---|---|
| **Entregables (10%)** | Los informes contienen toda la información solicitada y tiene alta calidad en cuanto a estilo y formato. | Se entregaron todos los informes. En términos de contenido están completos pero podría mejorar en cuanto a estilo o formato. | Se entregaron todos los informes. En términos de contenido están completos pero podría mejorar en cuanto a estilo Y formato. | Faltan algunos de los informes pero los entregados tiene buen estilo y formato. | Faltan algunos de los informes y los entregados necesitan mejoras de estilo y formato. | No se entregaron los informes. |
| **Diseño (30%)** | El diseño responde a los requisitos. Se detectaron todas las clases importantes y para cada clase se detectaron los atributos y métodos importantes. Usa las relaciones correctas. | El diseño responde a los requisitos. Se detectaron todas las clases importantes y para cada clase se detectaron los atributos y métodos importantes. Tiene algunas relaciones incorrectas o faltantes en el diseño de los métodos como por ejemplo los atributos. | El diseño responde a los requisitos. Faltó detectar algunas clases importantes. Faltó detectar algunos de los atributos y métodos importantes. Tiene algunas relaciones incorrectas. El diseño no corresponde a lo codificado. | Faltó detectar la mayoría de clases importantes. Faltó detectar muchos de los atributos y métodos importantes. Tiene muchas relaciones incorrectas. | El diseño no satisface los requisitos. | No se entregó el diseño. |
| **Funcionalidad (30%)** | Cumplió con todos los requisitos. | Fueron desarrollados mínimo el 75% de los requisitos. | El diseño responde al 75% de los requisitos / podría mejorarse. | Fueron desarrollados mínimo el 25% de los requisitos. | Fueron desarrollados menos del 25% de los requisitos. | La funcionalidad no responde a lo solicitado. |
| **Estilo de codificación (5%)** | El código se encuentra correctamente indentado, los nombres de los atributos y las funciones cumplen con el estándar de nombramiento. El código tiene documentación interna para facilitar la revisión. | La mayoría del código se encuentra correctamente indentado. La mayoría de los nombres de los atributos y las funciones cumplen con el estándar de nombramiento. La mayoría del código tiene documentación interna para facilitar la revisión. | Falta alguno de los ítems de calidad del estilo de codificación o alguna se cumple con mala calidad. | Faltan dos de los ítems de calidad del estilo de codificación o dos se cumple con mala calidad. | No hay código fuente suficiente para evaluar el estilo de codificación. | No cumple con el estándar de nombramiento. No se encuentra correctamente indentado. No está dividido adecuadamente. |
| **Mejores prácticas (5%)** | El código muestra mejores prácticas de desarrollo siempre. Reúso, separación de operaciones, buen manejo de ciclos, simplicidad, programación defensiva, validaciones. | El código muestra mejores prácticas de desarrollo en la mayoría de los casos, pero falta mejorar algunos de los siguientes aspectos: Reúso, separación de operaciones, buen manejo de ciclos, simplicidad, programación defensiva, validaciones. | El código muestra buenas prácticas de desarrollo pero falta mejorar dos de los siguientes aspectos: Reúso, separación de operaciones, buen manejo de ciclos, simplicidad, programación defensiva, validaciones. | El código aplica pocas buenas prácticas de desarrollo. Falta mejorar tres de los siguientes aspectos: Reúso, separación de operaciones, buen manejo de ciclos, simplicidad, programación defensiva, validaciones. | No hay código fuente suficiente para evaluar las buenas prácticas. | No se entregó proyecto o el proyecto no cubre al menos el 25% de las funcionalidades. No es posible evaluarlo. |


### Rúbrica de propiedad intelectual
| Criterio     | 1                                                                                                        | 0.8                                                                                                                                           | 0.6                                                                                                                | 0.4                                                                                                                                                                       | 0.2                                                                                                       | 0                                                                                                            |
|--------------|----------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------|
| **Sustentación** | Es evidente que el estudiante entiende el código que desarrolló lo explica con claridad y responde correctamente a las preguntas. | La sustentación es buena pero se evidenció inseguridad del estudiante para explicar algunas partes del trabajo desarrollado o para responder algunas preguntas. | La sustentación es aceptable se evidencia que el estudiante desarrolló el código pero le cuesta trabajo explicar aspectos del código. | La sustentación es regular se evidenció inseguridad del estudiante para explicar gran parte del trabajo desarrollado o para responder muchas de las preguntas. Parece que el código no hubiera sido desarrollado por el estudiante. | El estudiante demuestra que entiende partes del código, pero no tiene claro cómo se relacionan con la funcionalidad solicitada. | Se evidencia que el estudiante no entiende el código desarrollado, no es capaz de responder a las preguntas formuladas de manera correcta. |

