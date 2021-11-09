#include "ShrubberyCreationForm.hpp"
#include <fstream>

void	ShrubberyCreationForm::set_target(std::string target)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("schrubbery", 137, 145)
{
	this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form(form)
{
	this->_target = form._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	this->Form::operator=(form);
	this->_target = form._target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("schrubbery", 137, 145)
{
	this->_target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_grade_exec() < executor.get_grade())
	{
		throw GradeTooLowException();
	}
	if (this->get_sign() == false)
	{
		throw NotSignedYet();
	}

	std::ofstream tree(this->_target + "_shrubbery", std::ofstream::out);
	tree << "                                            .                " << std::endl;
	tree << "                                          .         ;        " << std::endl;
	tree << "             .              .              ;%     ;;         " << std::endl;
	tree << "               ,           ,                :;%  %;          " << std::endl;
	tree << "                :         ;                   :;%;'     .,   " << std::endl;
	tree << "       ,.        %;     %;            ;        %;'    ,;     " << std::endl;
	tree << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'      " << std::endl;
	tree << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'       " << std::endl;
	tree << "           ;%;      %;        ;%;        % ;%;  ,%;'         " << std::endl;
	tree << "            `%;.     ;%;     %;'         `;%%;.%;'           " << std::endl;
	tree << "             `:;%.    ;%%. %@;        %; ;@%;%'              " << std::endl;
	tree << "                `:%;.  :;bd%;          %;@%;'                " << std::endl;
	tree << "                  `@%:.  :;%.         ;@@%;'                 " << std::endl;
	tree << "                    `@%.  `;@%.      ;@@%;                   " << std::endl;
	tree << "                      `@%%. `@%%    ;@@%;                    " << std::endl;
	tree << "                        ;@%. :@%%  %@@%;                     " << std::endl;
	tree << "                          %@bd%%%bd%%:;                      " << std::endl;
	tree << "                            #@%%%%%:;;                       " << std::endl;
	tree << "                            %@@%%%::;                        " << std::endl;
	tree << "                            %@@@%(o);  . '                   " << std::endl;
	tree << "                            %@@@o%;:(.,'                     " << std::endl;
	tree << "                        `.. %@@@o%::;                        " << std::endl;
	tree << "                           `)@@@o%::;                        " << std::endl;
	tree << "                            %@@(o)::;                        " << std::endl;
	tree << "                           .%@@@@%::;                        " << std::endl;
	tree << "                           ;%@@@@%::;.                       " << std::endl;
	tree << "                          ;%@@@@%%:;;;.                      " << std::endl;
	tree << "                      ...;%@@@@@%%:;;;;,..                   " << std::endl;

	tree.close();

	std::cout << "Tree was created" << std::endl;
}

std::string	ShrubberyCreationForm::get_target()
{
	return this->_target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
