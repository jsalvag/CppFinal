//---------------------------------------------------------------------------

#ifndef ClasesH
#define ClasesH
class Limpiar{
public:
        void limpiarRegistro();
        void LimpiarModificar();
        void LimpiarHistoria();
        void LimpiarBuscar();
        void LimpiarDatosLaborales();
        void LimpiarCita();
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
        String* buscarDatos(String ci);
        void Modificar(String ci);
        void Ver(String ci);
        void VerParaModificar(String ci);
        void ListarModificar(String tipo);
        void ListarVer(String tipo);
        void RepoArchivo(String ci);
};


class Empleado: public Persona{
public:
        int z;

        Empleado();
        void ingresarEmpleado();
        void DatosParaModificar(String ci);
        void ModificarE(String ci);
        void ListarRepo();

};

class Representante: public Persona{
public:
        int y;

        Representante();
        void listarRel();
        void ingresarRepresentate();
        void ModificarR(String ci);
        void ListarReprePresentantes(String ci);

};

class Paciente: public Persona{
public:
        int codHist, cita;
        Paciente();
        void listar();
        void GuardarHistoria(String ci);
        void VerHistoria(String ci, bool mod);
        void ModificarP(String ci);
        void listarM();
        void ListarC();
        void DatosCita(String ci);
        void IngresarCita();
        void Citas(String ci);
        void ListarRepo();
};

//---------------------------------------------------------------------------
#endif
