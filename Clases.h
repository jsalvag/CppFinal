//---------------------------------------------------------------------------

#ifndef ClasesH
#define ClasesH
class Limpiar{
public:
        void limpiarRegistro();
        void LimpiarModificar();
        void LimpiarHistoria();
};

class Persona{
public:
        int x;

        Persona();
        void ingresarPersona(String tipo);
        bool validarCI(String ci);
        bool validarNombre(String nom);
        bool validarFechaNac(String f);
        bool buscarRepetido(String ci);
        int calcularEdad(String fecha);
        void buscarDatos(String ci);
};


class Empleado: public Persona{
public:
        int z;
                                
        Empleado();
        void ingresarEmpleado();

};

class Representante: public Persona{
public:
        int y;

        Representante();
        void listarRel();
        void ingresarRepresentate();

};

class Paciente: public Persona{
public:
        int codHist;
        void listar();
        void ListarModificar(String tipo);
        String* DatosModificar(String ci);
        void GuardarHistoria(String ci);
        Paciente();
};

//---------------------------------------------------------------------------
#endif
