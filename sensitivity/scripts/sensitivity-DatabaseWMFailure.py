import os
import shutil

TEMPLATE_FILE = "casestudy-full-template.c"
COPY_FILE = "casestudy-full-copy.c"
COPY_FILE_NAME = "casestudy-full-copy"

TEMPLATE_DIR = r"..\\"
OUTPUT_FILE = "casestudy-full-copy.out"
OUTOUT_FILE_LINE = "34: Pcontrol_end_47"
RESULTS_FILE = "results.txt"

PARAM_PREFIX = "rateval(\"TDatabase_Failure_4\", "
PARAM_SUFFIX = ");"
PARAM_NAME = "DatabaseWMFailure"

MIN_VALUE = 1.0e-6
MAX_VALUE = 1
STEP = 10


def execute_sensitivity_analysis():

    new_value = MIN_VALUE

    for i in range(7):
        replace_value_in_file(str(new_value))
        execute_spnp()
        parse_spnp_report(new_value)
        new_value = new_value * STEP






def init_spnp():

    os.environ['SPNP_DIRECTORY'] = r"C:\Spnp-Gui\spnp"

def init_dir():
    os.chdir(TEMPLATE_DIR)
    shutil.copyfile(TEMPLATE_FILE, COPY_FILE)

def replace_value_in_file(new_value):
    print("Replacing " + PARAM_PREFIX + " with " + new_value)

    copy_file = open(COPY_FILE, "r")
    contents = ""
    for line in copy_file:
        tmp_line = line
        if PARAM_PREFIX in line:
            tmp_line = PARAM_PREFIX + new_value + PARAM_SUFFIX + "\n"


        contents = contents + tmp_line

    copy_file.close()

    copy_file_modified = open(COPY_FILE, "w")
    copy_file_modified.write(contents)
    copy_file_modified.close()

def execute_spnp():
    print("Executing SPNP")
    os.system("spnp " + COPY_FILE_NAME)

def parse_spnp_report(new_value):
    print("Parsing spnp output file")
    report_file = open(OUTPUT_FILE, "r")
    result_file = open(RESULTS_FILE+"-"+PARAM_NAME, "a")

    for line in report_file:
        if OUTOUT_FILE_LINE in line:
            result_file.write(line.strip() + "\t\t" + str(new_value) + "\n")
            break

    report_file.close()
    result_file.close()



if __name__ == '__main__':
    init_spnp()
    init_dir()
    execute_sensitivity_analysis()


