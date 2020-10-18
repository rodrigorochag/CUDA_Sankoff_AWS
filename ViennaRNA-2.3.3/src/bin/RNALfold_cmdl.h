/** @file RNALfold_cmdl.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef RNALFOLD_CMDL_H
#define RNALFOLD_CMDL_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef RNALFOLD_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define RNALFOLD_CMDLINE_PARSER_PACKAGE "RNALfold"
#endif

#ifndef RNALFOLD_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define RNALFOLD_CMDLINE_PARSER_PACKAGE_NAME "RNALfold"
#endif

#ifndef RNALFOLD_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define RNALFOLD_CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct RNALfold_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int span_arg;	/**< @brief Set the maximum allowed separation of a base pair to span. I.e. no pairs (i,j) with j-i>span will be allowed.
  
 (default='150').  */
  char * span_orig;	/**< @brief Set the maximum allowed separation of a base pair to span. I.e. no pairs (i,j) with j-i>span will be allowed.
  
 original value given at command line.  */
  const char *span_help; /**< @brief Set the maximum allowed separation of a base pair to span. I.e. no pairs (i,j) with j-i>span will be allowed.
  
 help description.  */
  int noconv_flag;	/**< @brief Do not automatically substitude nucleotide \"T\" with \"U\"
  
 (default=off).  */
  const char *noconv_help; /**< @brief Do not automatically substitude nucleotide \"T\" with \"U\"
  
 help description.  */
  char * outfile_arg;	/**< @brief Print output to file instead of stdout
.  */
  char * outfile_orig;	/**< @brief Print output to file instead of stdout
 original value given at command line.  */
  const char *outfile_help; /**< @brief Print output to file instead of stdout
 help description.  */
  char * infile_arg;	/**< @brief Read a file instead of reading from stdin
.  */
  char * infile_orig;	/**< @brief Read a file instead of reading from stdin
 original value given at command line.  */
  const char *infile_help; /**< @brief Read a file instead of reading from stdin
 help description.  */
  double zscore_arg;	/**< @brief Activate z-score computation. An optional argument may be supplied to set the threshold
  Due to parsing the commandline parameters a negative value should be given immediately after \"z\" without spaces e.g. -z-4.9
  
 (default='-2').  */
  char * zscore_orig;	/**< @brief Activate z-score computation. An optional argument may be supplied to set the threshold
  Due to parsing the commandline parameters a negative value should be given immediately after \"z\" without spaces e.g. -z-4.9
  
 original value given at command line.  */
  const char *zscore_help; /**< @brief Activate z-score computation. An optional argument may be supplied to set the threshold
  Due to parsing the commandline parameters a negative value should be given immediately after \"z\" without spaces e.g. -z-4.9
  
 help description.  */
  int gquad_flag;	/**< @brief Incoorporate G-Quadruplex formation into the structure prediction algorithm
  
 (default=off).  */
  const char *gquad_help; /**< @brief Incoorporate G-Quadruplex formation into the structure prediction algorithm
  
 help description.  */
  double temp_arg;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
.  */
  char * temp_orig;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 original value given at command line.  */
  const char *temp_help; /**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 help description.  */
  int noTetra_flag;	/**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins. Mostly for testing.
  
 (default=off).  */
  const char *noTetra_help; /**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins. Mostly for testing.
  
 help description.  */
  int dangles_arg;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 (default='2').  */
  char * dangles_orig;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 original value given at command line.  */
  const char *dangles_help; /**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 help description.  */
  int noLP_flag;	/**< @brief Produce structures without lonely pairs (helices of length 1).
 (default=off).  */
  const char *noLP_help; /**< @brief Produce structures without lonely pairs (helices of length 1).
 help description.  */
  int noGU_flag;	/**< @brief Do not allow GU pairs
  
 (default=off).  */
  const char *noGU_help; /**< @brief Do not allow GU pairs
  
 help description.  */
  int noClosingGU_flag;	/**< @brief Do not allow GU pairs at the end of helices
  
 (default=off).  */
  const char *noClosingGU_help; /**< @brief Do not allow GU pairs at the end of helices
  
 help description.  */
  char * paramFile_arg;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
.  */
  char * paramFile_orig;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 original value given at command line.  */
  const char *paramFile_help; /**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 help description.  */
  char * nsp_arg;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
.  */
  char * nsp_orig;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 original value given at command line.  */
  const char *nsp_help; /**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 help description.  */
  int energyModel_arg;	/**< @brief Rarely used option to fold sequences from the artificial ABCD... alphabet, where A pairs B, C-D etc.  Use the energy parameters for GC (-e 1) or AU (-e 2) pairs.
  
.  */
  char * energyModel_orig;	/**< @brief Rarely used option to fold sequences from the artificial ABCD... alphabet, where A pairs B, C-D etc.  Use the energy parameters for GC (-e 1) or AU (-e 2) pairs.
  
 original value given at command line.  */
  const char *energyModel_help; /**< @brief Rarely used option to fold sequences from the artificial ABCD... alphabet, where A pairs B, C-D etc.  Use the energy parameters for GC (-e 1) or AU (-e 2) pairs.
  
 help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int span_given ;	/**< @brief Whether span was given.  */
  unsigned int noconv_given ;	/**< @brief Whether noconv was given.  */
  unsigned int outfile_given ;	/**< @brief Whether outfile was given.  */
  unsigned int infile_given ;	/**< @brief Whether infile was given.  */
  unsigned int zscore_given ;	/**< @brief Whether zscore was given.  */
  unsigned int gquad_given ;	/**< @brief Whether gquad was given.  */
  unsigned int temp_given ;	/**< @brief Whether temp was given.  */
  unsigned int noTetra_given ;	/**< @brief Whether noTetra was given.  */
  unsigned int dangles_given ;	/**< @brief Whether dangles was given.  */
  unsigned int noLP_given ;	/**< @brief Whether noLP was given.  */
  unsigned int noGU_given ;	/**< @brief Whether noGU was given.  */
  unsigned int noClosingGU_given ;	/**< @brief Whether noClosingGU was given.  */
  unsigned int paramFile_given ;	/**< @brief Whether paramFile was given.  */
  unsigned int nsp_given ;	/**< @brief Whether nsp was given.  */
  unsigned int energyModel_given ;	/**< @brief Whether energyModel was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct RNALfold_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure RNALfold_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure RNALfold_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *RNALfold_args_info_purpose;
/** @brief the usage string of the program */
extern const char *RNALfold_args_info_usage;
/** @brief the description string of the program */
extern const char *RNALfold_args_info_description;
/** @brief all the lines making the help output */
extern const char *RNALfold_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *RNALfold_args_info_full_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *RNALfold_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNALfold_cmdline_parser (int argc, char **argv,
  struct RNALfold_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use RNALfold_cmdline_parser_ext() instead
 */
int RNALfold_cmdline_parser2 (int argc, char **argv,
  struct RNALfold_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNALfold_cmdline_parser_ext (int argc, char **argv,
  struct RNALfold_args_info *args_info,
  struct RNALfold_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNALfold_cmdline_parser_dump(FILE *outfile,
  struct RNALfold_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNALfold_cmdline_parser_file_save(const char *filename,
  struct RNALfold_args_info *args_info);

/**
 * Print the help
 */
void RNALfold_cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void RNALfold_cmdline_parser_print_full_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void RNALfold_cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void RNALfold_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a RNALfold_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void RNALfold_cmdline_parser_params_init(struct RNALfold_cmdline_parser_params *params);

/**
 * Allocates dynamically a RNALfold_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized RNALfold_cmdline_parser_params structure
 */
struct RNALfold_cmdline_parser_params *RNALfold_cmdline_parser_params_create(void);

/**
 * Initializes the passed RNALfold_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void RNALfold_cmdline_parser_init (struct RNALfold_args_info *args_info);
/**
 * Deallocates the string fields of the RNALfold_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void RNALfold_cmdline_parser_free (struct RNALfold_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int RNALfold_cmdline_parser_required (struct RNALfold_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* RNALFOLD_CMDL_H */
