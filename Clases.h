//---------------------------------------------------------------------------

#ifndef ClasesH
#define ClasesH
class Limpiar{
public:
        void limpiarRegistro();        
};
class Persona{
public:
        int x;
        String ci, nom, ape,fNac, lNac, dir, tlf1, tlf2, tipo, rel;

        Persona();
        void ingresarPersona(String tipo);
};


class Empleado: public Persona{
public:
        String nivelEdu, cole, titulo, expe, cursos, fIngreso, cargo;

};

class Reprecentante: public Persona{
public:
        int y;
        String dirOfi, tlfOfi, otro;

        Reprecentante();
        void listarRel();
        void ingresarReprecentate();

};
//---------------------------------------------------------------------------
#endif
