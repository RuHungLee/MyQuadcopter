#ifndef PID_H
#define PID_H

float limit(float , float , float);
int pid_control(float , float , float , char , float);
void AngPIDController(void *);
void heightPIDController(void);

typedef struct pid_struct{
    
    float error , last_error;
    float kp;
    float ki;
    float kd;
    float last_angv; //inner
    float kp_rate;
    float ki_rate;
    float kd_rate;
    float last_ang; //outer
    float *feedback;
    float p , i , d , ii , imax , imin;
    float out , last_out;

}pst;


#endif

