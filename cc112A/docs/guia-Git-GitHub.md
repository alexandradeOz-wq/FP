# Trabajo básico con Git y GitHub
 
En este curso usaremos **Git y GitHub** como herramientas fundamentales para programar de manera profesional, trabajar en equipo y entregar tus tareas.

---

# 1. ¿Qué son Git y GitHub?

- **Git**: sistema de control de versiones (funciona en tu computadora)

- **GitHub**: plataforma en la nube donde guardas tus repositorios

 Piensa en Git como el “motor” y GitHub como el “lugar donde se comparte”.

---

# 2. Importante: Autenticación moderna

Ya NO se usa tu contraseña de GitHub. Se usan métodos seguros:

- 🔑 SSH (recomendado)

- 🔐 Token (PAT) con HTTPS


---

# 3. Configuración inicial (OBLIGATORIA)

Ejecuta esto una sola vez (útil en su PC/laptop personal)

```bash
git config --global user.name "Tu Nombre"
git config --global user.email "tu_correo@ejemplo.com"
```

En el laboratorio es preferible esta configuración (solo afecta al repo actual)
```bash
git config user.name "Tu Nombre"
git config user.email "tu_correo@ejemplo.com"
```

Verificar sus datos con
```bash
git config --list
```

# 4. Configurar acceso con SSH (RECOMENDADO)

## Paso 1: Generar clave SSH

```bash
ssh-keygen -t ed25519 -C "tu_correo@ejemplo.com"
```
Presiona enter en todo

## Paso 2: Copiar la clave

```bash
cat ~/.ssh/id_ed25519.pub
```

Copia el contenido


## Paso 3: Agregarla en GitHub

Ir a:

* Settings
* SSH and GPG keys
* New SSH key
* Pegar clave

## Paso 4: Probar conexión

```bash
ssh -T git@github.com
```
Debe aparecer un mensaje de éxito. En caso contrario puede ser necesario (en WSL, Linux) cargar la clave 

```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```



## 5. Clonar un repositorio

IMPORTANTE: usar SSH

```bash
git clone git@github.com:ORG/REPO.git
```
Luego: `cd REPO`


### 6. Flujo básico de trabajo

Cada vez que trabajes:

```bash
git add .     # prepara los cambios
git commit -m "Descripción de cambios" # Guarda los cambios localmente. Es necesario configurar usuario, email
git push   # envía los cambios a GitHub. Es nec config SSH
```

### 7. Alternativa: Token (PAT)

También puedes usar HTTPS con un token.

`settings -> developer settings -> PAT -> classic`

Cuando Git pida:

Usuario  -> tu usuario GitHub
Contraseña -> tu token (NO tu contraseña)


### 8. Buenas prácticas

* Hacer commits frecuentes

* Usar mensajes claros

* No subir archivos innecesarios

* Trabajar siempre dentro del repositorio



### 9. Flujo de trabajo con VS Code + Git + GitHub

VS Code permite trabajar con Git  de forma integrada, evitando el uso constante de la terminal reduciendo errores comunes.

* Inicie sesión en VS Code (icono inferior izquierdo, Sign in with GitHub), autorizar en el navegador

* VS Code gestiona automáticamente tus credenciales, no tendrás que autenticarte con cada `push`


### 10. Flujo de trabajo en Git en Múltiples PCs (Casa <-> Lab)

Cuando trabajamos en diferentes computadoras, debemos seguir un flujo ordenado para evitar errores como `divergent branches` o conflictos adicionales

**Regla** Siempre sincroniza antes de trabajar y sube tus cambios al terminar

**Antes de empezar a trabajar**

```bash
git pull --rebase origin main  # evita ramas divergentes
```
Este comando

* Descarga cambios recientes
* Evita divergencias
* Mantiene el historial limpio

**Trabajo normal**

```bash
git add .
git commit -m "Trabajo en el laboratorio 3"
git push origin main # push sin sincronizar  da error rejected (non-fast-forward)
```

**En casa**

Antes de continuar
```bash
git pull --rebase origin main
```


**Cuidado**

Evitar `reset --hard` pues se pierde los cambios locales